#ifndef org_apache_lucene_codecs_DocValuesFormat_H
#define org_apache_lucene_codecs_DocValuesFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesFormat;
        class DocValuesProducer;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class DocValuesFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availableDocValuesFormats_79131c6bbcf08916,
            mid_fieldsConsumer_a45dfb1d405359ea,
            mid_fieldsProducer_3a40b1af1475b985,
            mid_forName_caba59d0f6dd2ac5,
            mid_getName_e7df854526d67fa3,
            mid_reloadDocValuesFormats_d603563f542d31ba,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesFormat(const DocValuesFormat& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableDocValuesFormats();
          ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static DocValuesFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadDocValuesFormats(const ::java::lang::ClassLoader &);
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesFormat);
        extern PyTypeObject *PY_TYPE(DocValuesFormat);

        class t_DocValuesFormat {
        public:
          PyObject_HEAD
          DocValuesFormat object;
          static PyObject *wrap_Object(const DocValuesFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
