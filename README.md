# 📌 Teste com Sensor LDR no Arduino UNO  

## 🔧 Componentes Utilizados  
- 1x **Sensor LDR** 
- 1x **Resistor 10k ohm** 
- 1x **Placa Arduino UNO**  
- 1x **LED**  
- 1x **Relé**  
- 1x **Protoboard**  
- **Jumpers**  
- 1x **Fonte de energia 12V**  

## 🎯 Objetivo  
Este projeto tem como objetivo **ligar e desligar um LED automaticamente** de acordo com a luminosidade detectada pelo **sensor LDR**.  

## ⚙️ Funcionamento  
1. O **LDR** detecta a variação da luz ambiente.  
2. Quando o ambiente estiver **escuro**, o LED será **ligado** e o **relé será acionado**.  
3. Quando o ambiente estiver **claro**, o LED será **desligado** e o **relé será desativado**.  

## 🔌 Montagem do Circuito  
- O **LDR** será conectado ao **pino analógico A5** do Arduino.  
- O **LED** será conectado ao **relé**.  
- O **Relé** será conectado ao **pino digital 3** do Arduino.  
- A **fonte de 12V** alimentará o **relé** e o **LED**, que distribuirá energia entre os componentes.  

## 🚀 Possíveis Melhorias  
- Adicionar um **display LCD** para mostrar os valores lidos pelo LDR.  
- Implementar um **ajuste de sensibilidade** via potenciômetro.  
- Utilizar o relé para acionar **lâmpadas de maior potência**.  

---
Esse projeto é uma ótima introdução ao uso de sensores com o **Arduino** para automação de iluminação. 💡🔧


