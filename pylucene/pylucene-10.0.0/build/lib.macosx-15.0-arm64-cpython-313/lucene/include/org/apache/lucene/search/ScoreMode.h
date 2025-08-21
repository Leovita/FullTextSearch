#ifndef org_apache_lucene_search_ScoreMode_H
#define org_apache_lucene_search_ScoreMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScoreMode : public ::java::lang::Enum {
         public:
          enum {
            mid_isExhaustive_947277eca0748c4e,
            mid_needsScores_947277eca0748c4e,
            mid_valueOf_0978faca0f6bb266,
            mid_values_f78840f7f36cf3ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreMode(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoreMode(const ScoreMode& obj) : ::java::lang::Enum(obj) {}

          static ScoreMode *COMPLETE;
          static ScoreMode *COMPLETE_NO_SCORES;
          static ScoreMode *TOP_DOCS;
          static ScoreMode *TOP_DOCS_WITH_SCORES;
          static ScoreMode *TOP_SCORES;

          jboolean isExhaustive() const;
          jboolean needsScores() const;
          static ScoreMode valueOf(const ::java::lang::String &);
          static JArray< ScoreMode > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(ScoreMode);
        extern PyTypeObject *PY_TYPE(ScoreMode);

        class t_ScoreMode {
        public:
          PyObject_HEAD
          ScoreMode object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ScoreMode *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ScoreMode&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ScoreMode&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
