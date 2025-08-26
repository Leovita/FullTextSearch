#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldQuery;
          class FieldQuery$QueryPhraseMap;
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldQuery$QueryPhraseMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_19fcfae6d7b0025d,
              mid_getBoost_8b62236f0e4d0dbc,
              mid_getSlop_bd89ce15dad49192,
              mid_getTermMap_69d0cf843e74eb9d,
              mid_getTermOrPhraseNumber_bd89ce15dad49192,
              mid_isTerminal_9aa4f33e82ea333f,
              mid_isValidTermOrPhrase_478a3b045e32c171,
              mid_searchPhrase_7ef48b588792e019,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery$QueryPhraseMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldQuery$QueryPhraseMap(const FieldQuery$QueryPhraseMap& obj) : ::java::lang::Object(obj) {}

            FieldQuery$QueryPhraseMap(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            jfloat getBoost() const;
            jint getSlop() const;
            FieldQuery$QueryPhraseMap getTermMap(const ::java::lang::String &) const;
            jint getTermOrPhraseNumber() const;
            jboolean isTerminal() const;
            jboolean isValidTermOrPhrase(const ::java::util::List &) const;
            FieldQuery$QueryPhraseMap searchPhrase(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldQuery$QueryPhraseMap);
          extern PyTypeObject *PY_TYPE(FieldQuery$QueryPhraseMap);

          class t_FieldQuery$QueryPhraseMap {
          public:
            PyObject_HEAD
            FieldQuery$QueryPhraseMap object;
            static PyObject *wrap_Object(const FieldQuery$QueryPhraseMap&);
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
