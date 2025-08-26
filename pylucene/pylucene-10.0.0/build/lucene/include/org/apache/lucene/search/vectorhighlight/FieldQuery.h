#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FieldQuery$QueryPhraseMap;
          class FieldTermStack$TermInfo;
        }
        class Query;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldQuery : public ::java::lang::Object {
           public:
            enum {
              mid_init$_881c763a7a4ebf13,
              mid_getFieldTermMap_cf77ac11269ba2a7,
              mid_searchPhrase_c3f035b0cdaa2098,
              mid_flatten_d834fbe5292ef2f3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldQuery(const FieldQuery& obj) : ::java::lang::Object(obj) {}

            FieldQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, jboolean, jboolean);

            ::org::apache::lucene::search::vectorhighlight::FieldQuery$QueryPhraseMap getFieldTermMap(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::vectorhighlight::FieldQuery$QueryPhraseMap searchPhrase(const ::java::lang::String &, const ::java::util::List &) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldQuery);
          extern PyTypeObject *PY_TYPE(FieldQuery);

          class t_FieldQuery {
          public:
            PyObject_HEAD
            FieldQuery object;
            static PyObject *wrap_Object(const FieldQuery&);
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
