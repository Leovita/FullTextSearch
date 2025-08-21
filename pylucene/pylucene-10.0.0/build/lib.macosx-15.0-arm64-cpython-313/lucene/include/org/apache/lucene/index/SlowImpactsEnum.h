#ifndef org_apache_lucene_index_SlowImpactsEnum_H
#define org_apache_lucene_index_SlowImpactsEnum_H

#include "org/apache/lucene/index/ImpactsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Impacts;
        class PostingsEnum;
      }
      namespace util {
        class BytesRef;
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
            mid_init$_fc7f54ca547c6a5d,
            mid_advance_3c9bba330f083871,
            mid_advanceShallow_540b2b23d51b1efd,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_endOffset_20fbf7565993c3d7,
            mid_freq_20fbf7565993c3d7,
            mid_getImpacts_5c436a45185cb8e8,
            mid_getPayload_9740fddd1c7df148,
            mid_nextDoc_20fbf7565993c3d7,
            mid_nextPosition_20fbf7565993c3d7,
            mid_startOffset_20fbf7565993c3d7,
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
