#ifndef org_apache_lucene_monitor_PresearcherMatch_H
#define org_apache_lucene_monitor_PresearcherMatch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class QueryMatch;
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
      namespace monitor {

        class PresearcherMatch : public ::java::lang::Object {
         public:

          enum {
            fid_presearcherMatches,
            fid_queryId,
            fid_queryMatch,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PresearcherMatch(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PresearcherMatch(const PresearcherMatch& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_presearcherMatches() const;
          ::java::lang::String _get_queryId() const;
          ::org::apache::lucene::monitor::QueryMatch _get_queryMatch() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(PresearcherMatch);
        extern PyTypeObject *PY_TYPE(PresearcherMatch);

        class t_PresearcherMatch {
        public:
          PyObject_HEAD
          PresearcherMatch object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PresearcherMatch *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PresearcherMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PresearcherMatch&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
