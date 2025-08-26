#ifndef org_apache_lucene_analysis_compound_hyphenation_PatternParser_H
#define org_apache_lucene_analysis_compound_hyphenation_PatternParser_H

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class PatternParser : public ::org::xml::sax::helpers::DefaultHandler {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_8e6e947beb2506b3,
                mid_characters_186bb5d1c1aec30c,
                mid_endElement_f29246d136b6952d,
                mid_parse_ee46a189998009d6,
                mid_setConsumer_8e6e947beb2506b3,
                mid_normalizeException_50a2a2ff631c2653,
                mid_getExceptionWord_bdd1f1b242125b2d,
                mid_getInterletterValues_fef9c036acf290a9,
                mid_readToken_92c5980bea128f1d,
                mid_getPattern_fef9c036acf290a9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PatternParser(jobject obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PatternParser(const PatternParser& obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {}

              PatternParser();
              PatternParser(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &);

              void characters(const JArray< jchar > &, jint, jint) const;
              void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
              void parse(const ::java::lang::String &) const;
              void setConsumer(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(PatternParser);
            extern PyTypeObject *PY_TYPE(PatternParser);

            class t_PatternParser {
            public:
              PyObject_HEAD
              PatternParser object;
              static PyObject *wrap_Object(const PatternParser&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
