find . -name "*.sh" | rev | cut -c4- | rev | sed 's,.*/,,g'
