#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer_H

#include "org/apache/lucene/analysis/Tokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UnknownDictionary;
            class ConnectionCosts;
            class UserDictionary;
            class TokenInfoDictionary;
            class JaMorphData;
          }
          class JapaneseTokenizer$Mode;
        }
        namespace morph {
          class GraphvizFormatter;
        }
      }
      namespace util {
        class AttributeFactory;
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
      namespace analysis {
        namespace ja {

          class JapaneseTokenizer : public ::org::apache::lucene::analysis::Tokenizer {
           public:
            enum {
              mid_init$_4ed9ea6a53f3eaee,
              mid_init$_f5d8e3b0419645fd,
              mid_init$_422f3be857d31187,
              mid_init$_9e62965a827c90df,
              mid_init$_45e5f617616fda55,
              mid_calcNBestCost_3f230d713d7fd2b0,
              mid_close_3720c61b0679eb3e,
              mid_end_3720c61b0679eb3e,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              mid_setGraphvizFormatter_b59415f24de77e37,
              mid_setNBestCost_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer(jobject obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer(const JapaneseTokenizer& obj) : ::org::apache::lucene::analysis::Tokenizer(obj) {}

            static ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode *DEFAULT_MODE;

            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);
            JapaneseTokenizer(const ::org::apache::lucene::util::AttributeFactory &, const ::org::apache::lucene::analysis::ja::dict::TokenInfoDictionary &, const ::org::apache::lucene::analysis::ja::dict::UnknownDictionary &, const ::org::apache::lucene::analysis::ja::dict::ConnectionCosts &, const ::org::apache::lucene::analysis::ja::dict::UserDictionary &, jboolean, jboolean, const ::org::apache::lucene::analysis::ja::JapaneseTokenizer$Mode &);

            jint calcNBestCost(const ::java::lang::String &) const;
            void close() const;
            void end() const;
            jboolean incrementToken() const;
            void reset() const;
            void setGraphvizFormatter(const ::org::apache::lucene::analysis::morph::GraphvizFormatter &) const;
            void setNBestCost(jint) const;
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
      namespace analysis {
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer);

          class t_JapaneseTokenizer {
          public:
            PyObject_HEAD
            JapaneseTokenizer object;
            static PyObject *wrap_Object(const JapaneseTokenizer&);
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
