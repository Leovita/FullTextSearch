#ifndef org_apache_lucene_codecs_PostingsFormat_H
#define org_apache_lucene_codecs_PostingsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PostingsFormat;
        class FieldsProducer;
        class FieldsConsumer;
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
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

        class PostingsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availablePostingsFormats_4df174295554d7bd,
            mid_fieldsConsumer_19c1d7ed57faee5d,
            mid_fieldsProducer_1c13fe60e408387e,
            mid_forName_8bba56aaf031458d,
            mid_getName_09a7afff1868fc5e,
            mid_reloadPostingsFormats_7e882e12061eaf38,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsFormat(const PostingsFormat& obj) : ::java::lang::Object(obj) {}

          static JArray< PostingsFormat > *EMPTY;

          static ::java::util::Set availablePostingsFormats();
          ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static PostingsFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadPostingsFormats(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(PostingsFormat);
        extern PyTypeObject *PY_TYPE(PostingsFormat);

        class t_PostingsFormat {
        public:
          PyObject_HEAD
          PostingsFormat object;
          static PyObject *wrap_Object(const PostingsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
