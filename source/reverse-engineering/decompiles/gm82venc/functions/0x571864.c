// rea decompile_all
// name: CRYPT32.DLL::CryptQueryObject
// address: 0x571864
// body: available
// range: 0x571864-0x571869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL __stdcall
CryptQueryObject(DWORD dwObjectType,void *pvObject,DWORD dwExpectedContentTypeFlags,
                DWORD dwExpectedFormatTypeFlags,DWORD dwFlags,DWORD *pdwMsgAndCertEncodingType,
                DWORD *pdwContentType,DWORD *pdwFormatType,HCERTSTORE *phCertStore,HCRYPTMSG *phMsg,
                void **ppvContext)

{
  BOOL BVar1;

                    /* WARNING: Could not recover jumptable at 0x00571864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptQueryObject(dwObjectType,pvObject,dwExpectedContentTypeFlags,
                           dwExpectedFormatTypeFlags,dwFlags,pdwMsgAndCertEncodingType,
                           pdwContentType,pdwFormatType,phCertStore,phMsg,ppvContext);
  return BVar1;
}
