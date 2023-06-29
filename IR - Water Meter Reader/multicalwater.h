#ifndef _M402_
#define _M402_

#include "esphome.h"
#include "esphome/core/component.h"

#include "kmp.h"

class Multicalwater : public PollingComponent
{
public:
  Sensor *sensor_flow{nullptr};
  Sensor *sensor_volume{nullptr};
  Sensor *sensor_hourcounter{nullptr};

  // constructor
  Multicalwater(
      uint32_t update_interval,
      UARTComponent *uart_bus,
      Sensor *w__flow,
      Sensor *w__volume,
      Sensor *w__hourcounter) : PollingComponent(update_interval),
                           sensor_flow(w__flow),
                           sensor_volume(w__volume),
                           sensor_hourcounter(w__hourcounter)
  {
    _kmp = new KMP(uart_bus);
  }

  float get_setup_priority() const override { return esphome::setup_priority::AFTER_WIFI; }

  void setup() override {}

  void update() override
  {
    ESP_LOGD(TAG, "Start update");

    float volume = _kmp->Volume();
    if (volume) {
      sensor_volume->publish_state(volume);
    } else {
      sensor_volume->publish_state(0);
    }

    float flow = _kmp->CurrentWaterFlow();
    if (flow) {
      sensor_flow->publish_state(flow);
    } else {
      sensor_flow->publish_state(0);
    }

    float hourcounter = _kmp->HourCounter();
    if (hourcounter) {
      sensor_hourcounter->publish_state(hourcounter);
    } else {
      sensor_hourcounter->publish_state(0);
    }
    
    ESP_LOGD(TAG, "End update");
  }

private:
  KMP *_kmp;
};

#endif