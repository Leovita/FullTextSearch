#ifndef org_apache_lucene_codecs_bloom_DefaultBloomFilterFactory_H
#define org_apache_lucene_codecs_bloom_DefaultBloomFilterFactory_H

#include "org/apache/lucene/codecs/bloom/BloomFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {
          class FuzzySet;
        }
      }
      namespace index {
        class FieldInfo;
        class SegmentWriteState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {

          class DefaultBloomFilterFactory : public ::org::apache::lucene::codecs::bloom::BloomFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_getSetForField_5d70d021617fc0f4,
              mid_isSaturated_5344a7cf07b8d2e6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultBloomFilterFactory(jobject obj) : ::org::apache::lucene::codecs::bloom::BloomFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultBloomFilterFactory(const DefaultBloomFilterFactory& obj) : ::org::apache::lucene::codecs::bloom::BloomFilterFactory(obj) {}

            DefaultBloomFilterFactory();

            ::org::apache::lucene::codecs::bloom::FuzzySet getSetForField(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::index::FieldInfo &) const;
            jboolean isSaturated(const ::org::apache::lucene::codecs::bloom::FuzzySet &, const ::org::apache::lucene::index::FieldInfo &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(DefaultBloomFilterFactory);
          extern PyTypeObject *PY_TYPE(DefaultBloomFilterFactory);

          class t_DefaultBloomFilterFactory {
          public:
            PyObject_HEAD
            DefaultBloomFilterFactory object;
            static PyObject *wrap_Object(const DefaultBloomFilterFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
