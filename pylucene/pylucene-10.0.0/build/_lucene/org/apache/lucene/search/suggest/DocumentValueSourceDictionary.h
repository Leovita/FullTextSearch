#ifndef org_apache_lucene_search_suggest_DocumentValueSourceDictionary_H
#define org_apache_lucene_search_suggest_DocumentValueSourceDictionary_H

#include "org/apache/lucene/search/suggest/DocumentDictionary.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class DocumentValueSourceDictionary : public ::org::apache::lucene::search::suggest::DocumentDictionary {
           public:
            enum {
              mid_init$_cb1badcba14f675c,
              mid_init$_04e29fc6e0af469a,
              mid_init$_c70968f619bf47f4,
              mid_getEntryIterator_72e405f8eeb139f8,
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
