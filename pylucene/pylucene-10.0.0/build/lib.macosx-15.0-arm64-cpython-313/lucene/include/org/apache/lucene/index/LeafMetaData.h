#ifndef org_apache_lucene_index_LeafMetaData_H
#define org_apache_lucene_index_LeafMetaData_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace util {
        class Version;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LeafMetaData : public ::java::lang::Record {
         public:
          enum {
            mid_init$_a19d2da628286e89,
            mid_createdVersionMajor_20fbf7565993c3d7,
            mid_equals_570b5248a6da3ef6,
            mid_hasBlocks_947277eca0748c4e,
            mid_hashCode_20fbf7565993c3d7,
            mid_minVersion_f03381109b44c46a,
            mid_sort_74d249da84538e70,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafMetaData(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafMetaData(const LeafMetaData& obj) : ::java::lang::Record(obj) {}

          LeafMetaData(jint, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::search::Sort &, jboolean);

          jint createdVersionMajor() const;
          jboolean equals(const ::java::lang::Object &) const;
          jboolean hasBlocks() const;
          jint hashCode() const;
          ::org::apache::lucene::util::Version minVersion() const;
          ::org::apache::lucene::search::Sort sort() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafMetaData);
        extern PyTypeObject *PY_TYPE(LeafMetaData);

        class t_LeafMetaData {
        public:
          PyObject_HEAD
          LeafMetaData object;
          static PyObject *wrap_Object(const LeafMetaData&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
