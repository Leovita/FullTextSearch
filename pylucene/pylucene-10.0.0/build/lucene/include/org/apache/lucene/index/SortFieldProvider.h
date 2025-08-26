#ifndef org_apache_lucene_index_SortFieldProvider_H
#define org_apache_lucene_index_SortFieldProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortFieldProvider;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
      namespace search {
        class SortField;
      }
    }
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
            mid_availableSortFieldProviders_79131c6bbcf08916,
            mid_forName_2ddaf12feb47cae8,
            mid_getName_e7df854526d67fa3,
            mid_readSortField_73b746c7467b3297,
            mid_reloadSortFieldProviders_d603563f542d31ba,
            mid_write_50bc26c3f21276b3,
            mid_writeSortField_50bc26c3f21276b3,
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
