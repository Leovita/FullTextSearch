#ifndef org_apache_lucene_backward_codecs_lucene99_Lucene99SkipWriter_H
#define org_apache_lucene_backward_codecs_lucene99_Lucene99SkipWriter_H

#include "org/apache/lucene/codecs/MultiLevelSkipListWriter.h"

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
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace codecs {
        class CompetitiveImpactAccumulator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene99 {

          class Lucene99SkipWriter : public ::org::apache::lucene::codecs::MultiLevelSkipListWriter {
           public:
            enum {
              mid_init$_1acd772a8c1823da,
              mid_bufferSkip_81507270289a9e80,
              mid_resetSkip_e7bdbe105ce1bafb,
              mid_setField_158d72dbf0f32470,
              mid_writeImpacts_add9bb91b87d7eb9,
              mid_writeSkipData_e6e9d260c7282131,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99SkipWriter(jobject obj) : ::org::apache::lucene::codecs::MultiLevelSkipListWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99SkipWriter(const Lucene99SkipWriter& obj) : ::org::apache::lucene::codecs::MultiLevelSkipListWriter(obj) {}

            Lucene99SkipWriter(jint, jint, jint, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &);

            void bufferSkip(jint, const ::org::apache::lucene::codecs::CompetitiveImpactAccumulator &, jint, jlong, jlong, jint, jint) const;
            void resetSkip() const;
            void setField(jboolean, jboolean, jboolean) const;
            static void writeImpacts(const ::org::apache::lucene::codecs::CompetitiveImpactAccumulator &, const ::org::apache::lucene::store::DataOutput &);
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
      namespace backward_codecs {
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99SkipWriter);
          extern PyTypeObject *PY_TYPE(Lucene99SkipWriter);

          class t_Lucene99SkipWriter {
          public:
            PyObject_HEAD
            Lucene99SkipWriter object;
            static PyObject *wrap_Object(const Lucene99SkipWriter&);
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
