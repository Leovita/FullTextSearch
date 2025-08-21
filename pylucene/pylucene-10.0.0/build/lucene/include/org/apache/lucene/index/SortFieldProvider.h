#ifndef org_apache_lucene_index_SortFieldProvider_H
#define org_apache_lucene_index_SortFieldProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
      namespace index {
        class SortFieldProvider;
      }
      namespace search {
        class SortField;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SortFieldProvider : public ::java::lang::Object {
         public:
          enum {
            mid_availableSortFieldProviders_4df174295554d7bd,
            mid_forName_fc8c46145814bb51,
            mid_getName_09a7afff1868fc5e,
            mid_readSortField_54cf7e36f33e748d,
            mid_reloadSortFieldProviders_7e882e12061eaf38,
            mid_write_8d2516256489aa49,
            mid_writeSortField_8d2516256489aa49,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortFieldProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortFieldProvider(const SortFieldProvider& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableSortFieldProviders();
          static SortFieldProvider forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          ::org::apache::lucene::search::SortField readSortField(const ::org::apache::lucene::store::DataInput &) const;
          static void reloadSortFieldProviders(const ::java::lang::ClassLoader &);
          static void write(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &);
          void writeSortField(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SortFieldProvider);
        extern PyTypeObject *PY_TYPE(SortFieldProvider);

        class t_SortFieldProvider {
        public:
          PyObject_HEAD
          SortFieldProvider object;
          static PyObject *wrap_Object(const SortFieldProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
