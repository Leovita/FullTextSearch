#ifndef org_apache_lucene_search_CollectionStatistics_H
#define org_apache_lucene_search_CollectionStatistics_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CollectionStatistics : public ::java::lang::Record {
         public:
          enum {
            mid_init$_a6bdb9424f7510b6,
            mid_docCount_0f176418e3e16541,
            mid_equals_00d17418847797d4,
            mid_field_e7df854526d67fa3,
            mid_hashCode_bd89ce15dad49192,
            mid_maxDoc_0f176418e3e16541,
            mid_sumDocFreq_0f176418e3e16541,
            mid_sumTotalTermFreq_0f176418e3e16541,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionStatistics(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectionStatistics(const CollectionStatistics& obj) : ::java::lang::Record(obj) {}

          CollectionStatistics(const ::java::lang::String &, jlong, jlong, jlong, jlong);

          jlong docCount() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          jint hashCode() const;
          jlong maxDoc() const;
          jlong sumDocFreq() const;
          jlong sumTotalTermFreq() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(CollectionStatistics);
        extern PyTypeObject *PY_TYPE(CollectionStatistics);

        class t_CollectionStatistics {
        public:
          PyObject_HEAD
          CollectionStatistics object;
          static PyObject *wrap_Object(const CollectionStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
