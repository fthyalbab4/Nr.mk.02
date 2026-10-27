// rea decompile_all
// name: FUN_004c1078
// address: 0x4c1078
// body: available
// range: 0x4c1078-0x4c1148 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1078(undefined4 param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [9];
  byte local_1b;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_004a8960();
    if (iVar2 < 0x40046) {
      iVar2 = FUN_004c2664(param_1);
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        while (((-1 < iVar2 && (iVar4 = FUN_004c5060(param_1,0x417,iVar2,local_24), iVar4 != 0)) &&
               ((local_1b & 1) != 0))) {
          iVar2 = iVar2 + -1;
        }
        if (iVar2 < 0) {
          iVar2 = FUN_004efbd8(param_1,0x41d,0,&local_34);
          if (iVar2 != 0) {
            *param_3 = local_28 - local_30;
          }
        }
        else {
          iVar2 = FUN_004efbd8(param_1,0x41d,iVar2,&local_34);
          if (iVar2 != 0) {
            *param_3 = local_28 - local_30;
            *param_2 = local_2c - local_34;
          }
        }
      }
    }
    else {
      uVar3 = FUN_004efb90(param_1,0x43a,0,0);
      *param_3 = uVar3 >> 0x10;
      *param_2 = uVar3 & 0xffff;
    }
  }
  return;
}
