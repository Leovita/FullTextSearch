#ifndef org_apache_lucene_search_suggest_document_CompletionPostingsFormat_H
#define org_apache_lucene_search_suggest_document_CompletionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
      }
      namespace search {
        namespace suggest {
          namespace document {
            class CompletionPostingsFormat$FSTLoadMode;
          }
        }
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
             public:
              enum {
                mid_init$_ee46a189998009d6,
                mid_init$_0a1a7f84ded7d50a,
                mid_fieldsConsumer_53e79f306f41e536,
                mid_fieldsProducer_5a3bb464060de23c,
                mid_delegatePostingsFormat_d6a14e29d4b97c21,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionPostingsFormat(const CompletionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

              CompletionPostingsFormat(const ::java::lang::String &);
              CompletionPostingsFormat(const ::java::lang::String &, const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);

              ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
              ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionPostingsFormat);
            extern PyTypeObject *PY_TYPE(CompletionPostingsFormat);

            class t_CompletionPostingsFormat {
            public:
              PyObject_HEAD
              CompletionPostingsFormat object;
              static PyObject *wrap_Object(const CompletionPostingsFormat&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
