#ifndef org_apache_lucene_codecs_perfield_PerFieldPostingsFormat_H
#define org_apache_lucene_codecs_perfield_PerFieldPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace perfield {

          class PerFieldPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_fieldsConsumer_19c1d7ed57faee5d,
              mid_fieldsProducer_1c13fe60e408387e,
              mid_getPostingsFormatForField_8bba56aaf031458d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldPostingsFormat(const PerFieldPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static ::java::lang::String *PER_FIELD_FORMAT_KEY;
            static ::java::lang::String *PER_FIELD_NAME;
            static ::java::lang::String *PER_FIELD_SUFFIX_KEY;

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::PostingsFormat getPostingsFormatForField(const ::java::lang::String &) const;
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
        namespace perfield {
          extern PyType_Def PY_TYPE_DEF(PerFieldPostingsFormat);
          extern PyTypeObject *PY_TYPE(PerFieldPostingsFormat);

          class t_PerFieldPostingsFormat {
          public:
            PyObject_HEAD
            PerFieldPostingsFormat object;
            static PyObject *wrap_Object(const PerFieldPostingsFormat&);
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
