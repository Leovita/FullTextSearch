#ifndef org_apache_lucene_index_SlowImpactsEnum_H
#define org_apache_lucene_index_SlowImpactsEnum_H

#include "org/apache/lucene/index/ImpactsEnum.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
        class Impacts;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SlowImpactsEnum : public ::org::apache::lucene::index::ImpactsEnum {
         public:
          enum {
            mid_init$_328efe1af64e911e,
            mid_advance_a3904e10f5bb9437,
            mid_advanceShallow_8226bd0b0fc13dba,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_endOffset_bd89ce15dad49192,
            mid_freq_bd89ce15dad49192,
            mid_getImpacts_92b9bc95124e6d3a,
            mid_getPayload_adbedbc1fa61c358,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextPosition_bd89ce15dad49192,
            mid_startOffset_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowImpactsEnum(jobject obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowImpactsEnum(const SlowImpactsEnum& obj) : ::org::apache::lucene::index::ImpactsEnum(obj) {}

          SlowImpactsEnum(const ::org::apache::lucene::index::PostingsEnum &);

          jint advance(jint) const;
          void advanceShallow(jint) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          ::org::apache::lucene::index::Impacts getImpacts() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          jint nextDoc() const;
          jint nextPosition() const;
          jint startOffset() const;
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
        extern PyType_Def PY_TYPE_DEF(SlowImpactsEnum);
        extern PyTypeObject *PY_TYPE(SlowImpactsEnum);

        class t_SlowImpactsEnum {
        public:
          PyObject_HEAD
          SlowImpactsEnum object;
          static PyObject *wrap_Object(const SlowImpactsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
