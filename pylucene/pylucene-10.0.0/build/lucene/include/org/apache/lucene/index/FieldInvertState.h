#ifndef org_apache_lucene_index_FieldInvertState_H
#define org_apache_lucene_index_FieldInvertState_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
      namespace index {
        class IndexOptions;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInvertState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9c8fff0cbe5dc2cc,
            mid_init$_e33f1980a2a9878d,
            mid_getAttributeSource_cdef0e51a2510793,
            mid_getIndexCreatedVersionMajor_bd89ce15dad49192,
            mid_getIndexOptions_898aff4631b0024a,
            mid_getLength_bd89ce15dad49192,
            mid_getMaxTermFrequency_bd89ce15dad49192,
            mid_getName_e7df854526d67fa3,
            mid_getNumOverlap_bd89ce15dad49192,
            mid_getOffset_bd89ce15dad49192,
            mid_getPosition_bd89ce15dad49192,
            mid_getUniqueTermCount_bd89ce15dad49192,
            mid_setLength_8226bd0b0fc13dba,
            mid_setNumOverlap_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInvertState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInvertState(const FieldInvertState& obj) : ::java::lang::Object(obj) {}

          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &);
          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &, jint, jint, jint, jint, jint, jint);

          ::org::apache::lucene::util::AttributeSource getAttributeSource() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          jint getLength() const;
          jint getMaxTermFrequency() const;
          ::java::lang::String getName() const;
          jint getNumOverlap() const;
          jint getOffset() const;
          jint getPosition() const;
          jint getUniqueTermCount() const;
          void setLength(jint) const;
          void setNumOverlap(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInvertState);
        extern PyTypeObject *PY_TYPE(FieldInvertState);

        class t_FieldInvertState {
        public:
          PyObject_HEAD
          FieldInvertState object;
          static PyObject *wrap_Object(const FieldInvertState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
