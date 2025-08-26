#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class TermVectorsWriter;
        class TermVectorsReader;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_vectorsReader_7d1a6a780d28332f,
              mid_vectorsWriter_b2b9759be25f6183,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextTermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextTermVectorsFormat(const SimpleTextTermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

            SimpleTextTermVectorsFormat();

            ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextTermVectorsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextTermVectorsFormat);

          class t_SimpleTextTermVectorsFormat {
          public:
            PyObject_HEAD
            SimpleTextTermVectorsFormat object;
            static PyObject *wrap_Object(const SimpleTextTermVectorsFormat&);
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
