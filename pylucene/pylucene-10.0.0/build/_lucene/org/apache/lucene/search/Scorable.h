#ifndef org_apache_lucene_search_Scorable_H
#define org_apache_lucene_search_Scorable_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Scorable : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getChildren_4a269b968b3a511f,
            mid_score_8b62236f0e4d0dbc,
            mid_setMinCompetitiveScore_675f4cb9a2529ee0,
            mid_smoothingScore_5873a23b935a9d49,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorable(const Scorable& obj) : ::java::lang::Object(obj) {}

          Scorable();

          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          jfloat smoothingScore(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Scorable);
        extern PyTypeObject *PY_TYPE(Scorable);

        class t_Scorable {
        public:
          PyObject_HEAD
          Scorable object;
          static PyObject *wrap_Object(const Scorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
