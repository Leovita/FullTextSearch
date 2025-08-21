#ifndef org_apache_lucene_codecs_blockterms_FixedGapTermsIndexWriter_H
#define org_apache_lucene_codecs_blockterms_FixedGapTermsIndexWriter_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexWriterBase.h"

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
      namespace index {
        class FieldInfo;
        class SegmentWriteState;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexWriterBase$FieldWriter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class FixedGapTermsIndexWriter : public ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase {
           public:
            enum {
              mid_init$_45b2848804214eb5,
              mid_init$_316587a344b2d456,
              mid_addField_efa906cc1416a50c,
              mid_close_3720c61b0679eb3e,
              mid_indexedTermPrefixLength_c605ddf1ef691f34,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedGapTermsIndexWriter(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedGapTermsIndexWriter(const FixedGapTermsIndexWriter& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {}

            static jint DEFAULT_TERM_INDEX_INTERVAL;

            FixedGapTermsIndexWriter(const ::org::apache::lucene::index::SegmentWriteState &);
            FixedGapTermsIndexWriter(const ::org::apache::lucene::index::SegmentWriteState &, jint);

            ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase$FieldWriter addField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
            void close() const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(FixedGapTermsIndexWriter);
          extern PyTypeObject *PY_TYPE(FixedGapTermsIndexWriter);

          class t_FixedGapTermsIndexWriter {
          public:
            PyObject_HEAD
            FixedGapTermsIndexWriter object;
            static PyObject *wrap_Object(const FixedGapTermsIndexWriter&);
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
