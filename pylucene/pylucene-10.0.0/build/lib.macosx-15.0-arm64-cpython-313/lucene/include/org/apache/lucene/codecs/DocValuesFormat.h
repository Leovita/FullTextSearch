#ifndef org_apache_lucene_codecs_DocValuesFormat_H
#define org_apache_lucene_codecs_DocValuesFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class DocValuesFormat;
        class DocValuesProducer;
        class DocValuesConsumer;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
            mid_availableDocValuesFormats_4df174295554d7bd,
            mid_fieldsConsumer_d0fc0c4688b977ff,
            mid_fieldsProducer_4b11e7b79ec4a459,
            mid_forName_97202d142f4d78a0,
            mid_getName_09a7afff1868fc5e,
            mid_reloadDocValuesFormats_7e882e12061eaf38,
            mid_toString_09a7afff1868fc5e,
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
