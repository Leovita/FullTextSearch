#ifndef org_apache_lucene_search_ScoreMode_H
#define org_apache_lucene_search_ScoreMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
            mid_isExhaustive_9aa4f33e82ea333f,
            mid_needsScores_9aa4f33e82ea333f,
            mid_valueOf_aaac597407ce72b0,
            mid_values_d330caff8886ee41,
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
