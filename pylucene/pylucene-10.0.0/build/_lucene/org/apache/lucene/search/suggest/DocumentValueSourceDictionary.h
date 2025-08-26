#ifndef org_apache_lucene_search_suggest_DocumentValueSourceDictionary_H
#define org_apache_lucene_search_suggest_DocumentValueSourceDictionary_H

#include "org/apache/lucene/search/suggest/DocumentDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
        }
        class LongValuesSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class DocumentValueSourceDictionary : public ::org::apache::lucene::search::suggest::DocumentDictionary {
           public:
            enum {
              mid_init$_f2e4c83ddabaedb7,
              mid_init$_735df9c67c326296,
              mid_init$_aacb76a10e241f02,
              mid_getEntryIterator_b233487188876d36,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocumentValueSourceDictionary(jobject obj) : ::org::apache::lucene::search::suggest::DocumentDictionary(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocumentValueSourceDictionary(const DocumentValueSourceDictionary& obj) : ::org::apache::lucene::search::suggest::DocumentDictionary(obj) {}

            DocumentValueSourceDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &);
            DocumentValueSourceDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::java::lang::String &);
            DocumentValueSourceDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::java::lang::String &, const ::java::lang::String &);

            ::org::apache::lucene::search::suggest::InputIterator getEntryIterator() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(DocumentValueSourceDictionary);
          extern PyTypeObject *PY_TYPE(DocumentValueSourceDictionary);

          class t_DocumentValueSourceDictionary {
          public:
            PyObject_HEAD
            DocumentValueSourceDictionary object;
            static PyObject *wrap_Object(const DocumentValueSourceDictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
