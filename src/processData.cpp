#include <Arduino.h>
#include "mqtt.h"
#include "Ticker.h"
#include "sensor.h"


void publishTopic_();
void heart();

Ticker time1(publishTopic_, 2000);
Ticker time2(heart, 1000);

void initTimer() {
    time1.start();
    time2.start();
}

// 在这里加入需要的定时器,这个函数会在主函数内一直运行更新定时器
void loopTimer() {
    time1.update();
    time2.update();
}

void heart() {
    publishMessage("Co2/available", "online");
}

void publishTopic_() {
    // 在这里发布主题
    int co2 = getSensorData();
    if (co2)
    {
        char data[5];
        itoa(co2, data, 10);
        publishMessage("Co2", data);
    }
    
    
}

void subscribeTopic_() {
    // 在这里订阅主题
}

void processData(const char* topic, const char* data)
{

}