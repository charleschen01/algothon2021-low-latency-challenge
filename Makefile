
bin/signal_classifier: src/signal_classifier.cpp
	@mkdir -p bin
	@g++ $^ -o bin/signal_classifier

run: bin/signal_classifier
	@bin/signal_classifier

clean:
	@rm -rf bin