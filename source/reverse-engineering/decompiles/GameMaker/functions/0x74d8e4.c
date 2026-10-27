// rea decompile_all
// name: FUN_0074d8e4
// address: 0x74d8e4
// body: available
// range: 0x74d8e4-0x74d8ff inclusive
// range: 0x74d93c-0x74da44 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074d8e4(undefined4 param_1,ushort param_2,undefined4 param_3)

{
  uint local_10;
  undefined1 local_c;

  switch(param_2) {
  case 0:
    FUN_0040b75c(PTR_PTR_007827bc,param_3);
    break;
  case 1:
    FUN_0040b75c(PTR_PTR_00782164,param_3);
    break;
  case 2:
    FUN_0040b75c(PTR_PTR_0078224c,param_3);
    break;
  case 3:
    FUN_0040b75c(PTR_PTR_00781b24,param_3);
    break;
  case 4:
    FUN_0040b75c(PTR_PTR_007815ec,param_3);
    break;
  case 5:
    FUN_0040b75c(PTR_PTR_00781f30,param_3);
    break;
  case 6:
    FUN_0040b75c(PTR_PTR_00781d40,param_3);
    break;
  case 7:
    FUN_0040b75c(PTR_PTR_0078277c,param_3);
    break;
  case 8:
    FUN_0040b75c(PTR_PTR_007828a8,param_3);
    break;
  case 9:
    FUN_0040b75c(PTR_PTR_00781dcc,param_3);
    break;
  case 10:
    FUN_0040b75c(PTR_PTR_00782160,param_3);
    break;
  case 0xb:
    FUN_0040b75c(PTR_PTR_00781ab4,param_3);
    break;
  case 0xc:
    FUN_0040b75c(PTR_PTR_00781bc0,param_3);
    break;
  case 0xd:
    FUN_0040b75c(PTR_PTR_00782910,param_3);
    break;
  case 0xe:
    FUN_0040b75c(PTR_PTR_00782428,param_3);
    break;
  default:
    local_10 = (uint)param_2;
    local_c = 0;
    FUN_00417d4c(L"reserved [%.2d]",&local_10,0,param_3);
  }
  return;
}
