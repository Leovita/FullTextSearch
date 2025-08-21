#ifndef org_apache_lucene_codecs_KnnVectorsFormat_H
#define org_apache_lucene_codecs_KnnVectorsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsFormat;
        class KnnVectorsReader;
        class KnnVectorsWriter;
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

        class KnnVectorsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availableKnnVectorsFormats_4df174295554d7bd,
            mid_fieldsReader_804fb3f7a48fdbd5,
            mid_fieldsWriter_9d6535131b264391,
            mid_forName_e43dc95f99c292bf,
            mid_getMaxDimensions_3f230d713d7fd2b0,
            mid_getName_09a7afff1868fc5e,
            mid_reloadKnnVectorsFormat_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsFormat(const KnnVectorsFormat& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_MAX_DIMENSIONS;
          static KnnVectorsFormat *EMPTY;

          static ::java::util::Set availableKnnVectorsFormats();
          ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
          static KnnVectorsFormat forName(const ::java::lang::String &);
          jint getMaxDimensions(const ::java::lang::String &) const;
          ::java::lang::String getName() const;
          static void reloadKnnVectorsFormat(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorsFormat);
        extern PyTypeObject *PY_TYPE(KnnVectorsFormat);

        class t_KnnVectorsFormat {
        public:
          PyObject_HEAD
          KnnVectorsFormat object;
          static PyObject *wrap_Object(const KnnVectorsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
