#ifndef org_apache_lucene_monitor_PresearcherMatches_H
#define org_apache_lucene_monitor_PresearcherMatches_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class StringBuilder;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class PresearcherMatch;
        class MultiMatchingQueries;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class PresearcherMatches : public ::java::lang::Object {
         public:
          enum {
            mid_init$_48f78bc01b8bbac2,
            mid_match_b6c0d27a40e507a8,
            max_mid
          };

          enum {
            fid_matcher,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PresearcherMatches(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PresearcherMatches(const PresearcherMatches& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::monitor::MultiMatchingQueries _get_matcher() const;

          PresearcherMatches(const ::java::util::Map &, const ::org::apache::lucene::monitor::MultiMatchingQueries &);

          ::org::apache::lucene::monitor::PresearcherMatch match(const ::java::lang::String &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PresearcherMatches);
        extern PyTypeObject *PY_TYPE(PresearcherMatches);

        class t_PresearcherMatches {
        public:
          PyObject_HEAD
          PresearcherMatches object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PresearcherMatches *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PresearcherMatches&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PresearcherMatches&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
