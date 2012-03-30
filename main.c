#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

static const char *document = "<doc/>";

void main() {
	LIBXML_TEST_VERSION

	xmlDocPtr doc;
	doc = xmlReadMemory(document, sizeof(document), "noname.xml", NULL, 0);
	if (doc == NULL) {
        fprintf(stderr, "Failed to parse document\n");
		return;
    }
    xmlFreeDoc(doc);
	xmlCleanupParser();
	xmlMemoryDump();
}
