class AnalogControlDevice 
{
    public:
        AnalogControlDevice(); // конструктор класса

        void setAnalogValue(float value); // устанавливает аналоговое значение устройства, value - значение аналогового сигнала в диапазоне от 0 до 1

        float getAnalogValue() const // возвращает текущее аналоговое значение устройства
        {
            return m_analogValue;
        }

        void turnOn() // включает устройство
        {
            m_isOn = true;
        }

        void turnOff() // выключает устройство
        {
            m_isOn = false;
        }

        bool isOn() const // возвращает состояние устройства (вкл. или выкл.)
        {
            return m_isOn;
        }

    private:
        float m_analogValue = 0; // текущее аналоговое значение устройства
        bool m_isOn = false; // состояние устройства (вкл. или выкл.)
};