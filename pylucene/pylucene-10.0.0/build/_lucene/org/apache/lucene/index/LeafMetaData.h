#ifndef org_apache_lucene_index_LeafMetaData_H
#define org_apache_lucene_index_LeafMetaData_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
      namespace search {
        class Sort;
      }
    }
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
            mid_init$_0156b274f141ab86,
            mid_createdVersionMajor_bd89ce15dad49192,
            mid_equals_00d17418847797d4,
            mid_hasBlocks_9aa4f33e82ea333f,
            mid_hashCode_bd89ce15dad49192,
            mid_minVersion_098638c0dde6da21,
            mid_sort_9a15197f7786b173,
            mid_toString_e7df854526d67fa3,
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
