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
              mid_init$_f93387650661ae24,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_originalTermIndexes_623cd4a044ba647a,
              mid_suggestion_fe719aba7d8f556e,
              mid_toString_09a7afff1868fc5e,
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
