# CP1_EC
Apresentação do CP1 de edge compution da FIAP
Feito e produzido por :
Paulo Cesar de Govea Junior - (RM:566034)
Guilherme Vilela Perez - (RM:564422)
Gustavo Panham Dourado - (RM:563904)
Christian Schunck de Almeida - (RM:563850)
Thomas Jeferson Santana Wang - (RM565104)


⸻
Objetivo:
Desenvolver um sistema com Arduino que monitore a luminosidade do ambiente onde os vinhos são armazenados, garantindo que as condições estejam adequadas para preservar a qualidade dos produtos.

⸻

Componentes Utilizados:
	•	Arduino UNO
	•	Sensor LDR (sensor de luminosidade)
	•	3 LEDs (verde, amarelo e vermelho)
	•	Buzzer (buzina)
	•	Resistores (para LEDs e LDR)
	•	Jumpers e protoboard (se necessário)

⸻

Funcionamento do Sistema:
	1.	Leitura da Luminosidade:
	•	O sensor LDR é utilizado para medir a intensidade da luz no ambiente.
	•	O valor lido é interpretado pelo Arduino através da porta analógica A0.
	2.	Classificação da Luminosidade:
	•	Se a luminosidade for alta o suficiente (≥800), o sistema acende o LED verde para indicar que está OK.
	•	Se a luminosidade estiver moderada (≥500 e <800), o LED amarelo acende, indicando um nível de alerta. Nesse caso, o sistema também aciona o buzzer por 3 segundos.
	•	Se a luminosidade for baixa (<500), o sistema acende o LED vermelho, sinalizando que há um problema crítico com a iluminação.
	3.	Sinalização Auditiva:
	•	O buzzer é utilizado para chamar a atenção quando a luminosidade estiver em nível de alerta (LED amarelo).

⸻

Aplicação Prática:
Esse sistema pode ser utilizado em vinícolas, adegas ou ambientes de armazenamento onde é importante manter controle sobre a intensidade luminosa, preservando a qualidade de produtos sensíveis à luz, como vinhos finos.

⸻

Conclusão:
O sistema proposto é simples, eficaz e de baixo custo, utilizando o Arduino como controlador principal. Ele pode ser expandido futuramente com sensores de temperatura e umidade para um controle ambiental ainda mais completo.




Projeto feito e construido no Wokwi.com
