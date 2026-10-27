// rea decompile_all
// name: FUN_00421628
// address: 0x421628
// body: available
// range: 0x421628-0x42171d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x421644 (push 0x42171e followed by fs-segment stack chaining); handler 0x42171e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421628(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0042171e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*param_2 == 0) {
    puStack_28 = &stack0xfffffffc;
    piVar2 = (int *)FUN_004221c0();
    (**(code **)(*piVar2 + 0x18))(piVar2,&local_c);
    cVar1 = FUN_004215cc(param_1,local_c);
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_00421590();
      (**(code **)(*piVar2 + 0x18))(piVar2,&local_10);
      cVar1 = FUN_004215cc(param_1,local_10);
      if (cVar1 == '\0') {
        piVar2 = (int *)FUN_004221fc();
        (**(code **)(*piVar2 + 0x18))(piVar2,&local_14);
        cVar1 = FUN_004215cc(param_1,local_14);
        if (cVar1 == '\0') {
          iVar3 = FUN_004220dc();
          *param_2 = iVar3;
        }
        else {
          iVar3 = FUN_004221fc();
          *param_2 = iVar3;
        }
      }
      else {
        iVar3 = FUN_00421590();
        *param_2 = iVar3;
      }
    }
    else {
      iVar3 = FUN_004221c0();
      *param_2 = iVar3;
    }
    (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,&local_18);
    FUN_00409c34(local_18);
  }
  else {
    (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,&local_8);
    cVar1 = FUN_004215cc(param_1,local_8);
    if (cVar1 != '\0') {
      FUN_00409c34(local_8);
    }
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00421725;
  puStack_2c = (undefined1 *)0x42171d;
  FUN_00409120(&local_18,&DAT_00410758,5);
  return;
}
