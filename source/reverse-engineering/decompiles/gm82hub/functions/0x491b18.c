// rea decompile_all
// name: FUN_00491b18
// address: 0x491b18
// body: available
// range: 0x491b18-0x491b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491b18(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [8];
  undefined1 local_14;
  undefined4 local_10;

  iVar2 = FUN_00495074(param_1,0x417,param_2,auStack_1c);
  if (iVar2 != 0) {
    FUN_004900f0(local_10,local_14);
    uVar3 = FUN_00490580(local_10);
    uVar1 = FUN_0048ffdc(local_10);
    FUN_004bcb48(param_1,0x411,uVar3,uVar1);
  }
  return;
}
