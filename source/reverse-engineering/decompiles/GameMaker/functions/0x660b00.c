// rea decompile_all
// name: FUN_00660b00
// address: 0x660b00
// body: available
// range: 0x660b00-0x660c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00660b00(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c [2];

  local_c[0] = *param_1;
  local_c[1] = param_1[1];
  piVar3 = (int *)(param_4 + -8);
  if (((*(int *)PTR_DAT_00782230 != 0) && (*(char *)(*(int *)(*piVar3 + 0x324) + 0x30c) != '\0')) ||
     (*(char *)(param_4 + -9) == '\0')) {
    iVar2 = *(int *)(*piVar3 + 0x328);
    local_14 = *(undefined4 *)(iVar2 + 0x40);
    local_10 = *(undefined4 *)(iVar2 + 0x44);
    FUN_004ee09c(iVar2,&local_14,&local_24);
    *(undefined4 *)(param_4 + -0x14) = local_24;
    *(undefined4 *)(param_4 + -0x10) = local_20;
    if ((*(char *)(*piVar3 + 0x30d) != '\x03') || (*(char *)(param_4 + -9) != '\0')) {
      iVar2 = *(int *)(*piVar3 + 0x328);
      cVar1 = FUN_00405c98(iVar2,&PTR_FUN_0065fae8);
      if (cVar1 == '\0') {
        FUN_004edf30(iVar2,local_34);
        FUN_004ee09c(*(undefined4 *)(iVar2 + 0x34),local_34,&local_24);
        *(undefined4 *)(param_4 + -0x14) = local_24;
        *(undefined4 *)(param_4 + -0x10) = local_20;
        iVar2 = extraout_ECX;
      }
      else {
        local_1c = *(int *)(iVar2 + 0x40) + *(int *)(*(int *)(iVar2 + 0x34) + 0x40);
        iVar2 = *(int *)(iVar2 + 0x44) + *(int *)(*(int *)(iVar2 + 0x34) + 0x44);
        *(int *)(param_4 + -0x14) = local_1c;
        *(int *)(param_4 + -0x10) = iVar2;
        local_18 = iVar2;
      }
      FUN_004f76a8(*piVar3,(uint)*(byte *)(param_4 + -9),iVar2,*(undefined4 *)(*piVar3 + 0x350),
                   local_c[*(int *)(*piVar3 + 0x44) + 2 < *(int *)(param_4 + -0x10)] |
                   *(uint *)(&DAT_0077f344 + (uint)*(byte *)(param_4 + -9) * 4));
      (**(code **)PTR_DAT_00782230)();
    }
  }
  return;
}
