#ifndef org_apache_lucene_search_spell_CombineSuggestion_H
#define org_apache_lucene_search_spell_CombineSuggestion_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
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
        namespace spell {

          class CombineSuggestion : public ::java::lang::Record {
           public:
            enum {
              mid_init$_1eef3b0d4932bbb4,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_originalTermIndexes_4b72a28a860ae838,
              mid_suggestion_6735bc69a6ea6149,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombineSuggestion(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombineSuggestion(const CombineSuggestion& obj) : ::java::lang::Record(obj) {}

            CombineSuggestion(const ::org::apache::lucene::search::spell::SuggestWord &, const JArray< jint > &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            JArray< jint > originalTermIndexes() const;
            ::org::apache::lucene::search::spell::SuggestWord suggestion() const;
            ::java::lang::String toString() const;
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
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(CombineSuggestion);
          extern PyTypeObject *PY_TYPE(CombineSuggestion);

          class t_CombineSuggestion {
          public:
            PyObject_HEAD
            CombineSuggestion object;
            static PyObject *wrap_Object(const CombineSuggestion&);
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
