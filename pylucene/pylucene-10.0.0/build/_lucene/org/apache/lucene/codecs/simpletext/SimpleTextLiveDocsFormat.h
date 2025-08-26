#ifndef org_apache_lucene_codecs_simpletext_SimpleTextLiveDocsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextLiveDocsFormat_H

#include "org/apache/lucene/codecs/LiveDocsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace util {
        class Bits;
      }
      namespace index {
        class SegmentCommitInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextLiveDocsFormat : public ::org::apache::lucene::codecs::LiveDocsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_files_0f92fd81714b4d0e,
              mid_readLiveDocs_a6e367a10af13e52,
              mid_writeLiveDocs_f93b608310103666,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextLiveDocsFormat(jobject obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextLiveDocsFormat(const SimpleTextLiveDocsFormat& obj) : ::org::apache::lucene::codecs::LiveDocsFormat(obj) {}

            SimpleTextLiveDocsFormat();

            void files(const ::org::apache::lucene::index::SegmentCommitInfo &, const ::java::util::Collection &) const;
            ::org::apache::lucene::util::Bits readLiveDocs(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, const ::org::apache::lucene::store::IOContext &) const;
            void writeLiveDocs(const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentCommitInfo &, jint, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextLiveDocsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextLiveDocsFormat);

          class t_SimpleTextLiveDocsFormat {
          public:
            PyObject_HEAD
            SimpleTextLiveDocsFormat object;
            static PyObject *wrap_Object(const SimpleTextLiveDocsFormat&);
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
