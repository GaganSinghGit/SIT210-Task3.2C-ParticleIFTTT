int light = 0;

void setup() {
    Particle.variable("light", light);
}

void loop() {

    Particle.publish("Light", String(light),PRIVATE);

    delay(2000);
    
    light = 600;
    delay(60000);
    light = 150;
    delay(60000);
}
