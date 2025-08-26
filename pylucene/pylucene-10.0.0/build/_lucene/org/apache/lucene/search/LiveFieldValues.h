#ifndef org_apache_lucene_search_LiveFieldValues_H
#define org_apache_lucene_search_LiveFieldValues_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
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
        class ReferenceManager$RefreshListener;
        class ReferenceManager;
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
            mid_init$_69308c1c9a252c43,
            mid_add_101074fdf5bb68f6,
            mid_afterRefresh_f5dd97eebf6a215a,
            mid_beforeRefresh_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_delete_ee46a189998009d6,
            mid_get_a78a91e32cc37c7c,
            mid_size_bd89ce15dad49192,
            mid_lookupFromSearcher_a0ff83d2ec55a8fc,
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
