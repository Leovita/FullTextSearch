#ifndef org_apache_lucene_search_LiveFieldValues_H
#define org_apache_lucene_search_LiveFieldValues_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager;
        class ReferenceManager$RefreshListener;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LiveFieldValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7012386bd55e24c7,
            mid_add_7a6f329c036f2238,
            mid_afterRefresh_b110fc3a58c081ab,
            mid_beforeRefresh_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_delete_0d82408c6e55bc30,
            mid_get_e5cf973b773e2999,
            mid_size_20fbf7565993c3d7,
            mid_lookupFromSearcher_b9a30901c306b6b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LiveFieldValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LiveFieldValues(const LiveFieldValues& obj) : ::java::lang::Object(obj) {}

          LiveFieldValues(const ::org::apache::lucene::search::ReferenceManager &, const ::java::lang::Object &);

          void add(const ::java::lang::String &, const ::java::lang::Object &) const;
          void afterRefresh(jboolean) const;
          void beforeRefresh() const;
          void close() const;
          void delete$(const ::java::lang::String &) const;
          ::java::lang::Object get(const ::java::lang::String &) const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(LiveFieldValues);
        extern PyTypeObject *PY_TYPE(LiveFieldValues);

        class t_LiveFieldValues {
        public:
          PyObject_HEAD
          LiveFieldValues object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_LiveFieldValues *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LiveFieldValues&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LiveFieldValues&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
