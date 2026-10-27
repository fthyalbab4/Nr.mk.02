// rea decompile_all
// name: FUN_007501b0
// address: 0x7501b0
// body: available
// range: 0x7501b0-0x750315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7501d4 (push 0x750316 followed by fs-segment stack chaining); handler 0x750316 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007501b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  bool bVar7;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 local_38 [4];
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  char local_21;
  int local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_48 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_4c = &LAB_00750316;
  puStack_50 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_50;
  local_15 = 0;
  local_1c = param_5;
  puVar1 = &stack0xfffffffc;
  local_14 = param_2;
  local_10 = param_1;
  if (*PTR_DAT_007828b4 == '\0') {
    cVar2 = FUN_0075019c(param_1,param_5);
    puVar1 = puStack_48;
    if (cVar2 != '\0') {
      local_21 = '\x01';
      goto LAB_00750200;
    }
  }
  puStack_48 = puVar1;
  local_21 = '\0';
LAB_00750200:
  iVar3 = FUN_0074fa04(local_14);
  if (iVar3 != 0) {
    local_2c = *(int *)(iVar3 + 0x80);
    local_28 = *(undefined4 *)(iVar3 + 0x84);
    if (local_2c != 0) {
      iVar3 = local_14 + local_2c;
      FUN_00408144(&local_c,param_3);
      puStack_50 = (undefined1 *)0x750247;
      uVar4 = FUN_00406e5c(&local_8);
      puStack_50 = (undefined1 *)0x750251;
      cVar2 = FUN_00733db8(local_c,uVar4);
      if (cVar2 == '\0') {
        puStack_50 = (undefined1 *)0x750264;
        FUN_0040810c(&local_8,param_3,0);
      }
      puStack_50 = (undefined1 *)0x75026c;
      local_34 = FUN_00407670(local_8);
      for (; *(int *)(iVar3 + 0xc) != 0; iVar3 = iVar3 + 0x14) {
        local_30 = *(int *)(iVar3 + 0xc) + local_14;
        puStack_50 = (undefined1 *)0x750285;
        iVar5 = FUN_00417884(local_30,local_34);
        if (iVar5 == 0) {
          for (piVar6 = (int *)(*(int *)(iVar3 + 0x10) + local_14); *piVar6 != 0;
              piVar6 = piVar6 + 1) {
            if (local_21 == '\0') {
              bVar7 = *piVar6 == param_5;
            }
            else {
              local_20 = *piVar6;
              puStack_50 = (undefined1 *)0x7502a7;
              cVar2 = FUN_0075019c(local_10,local_20);
              if ((cVar2 == '\0') || (*(int *)(local_20 + 1) != *(int *)(local_1c + 1))) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
            }
            if (bVar7) {
              puStack_50 = local_38;
              local_15 = FUN_00738670(piVar6,&param_4,4);
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = (int)puStack_4c;
  puStack_48 = (undefined1 *)0x75030d;
  FUN_00407a78(&local_c,puStack_4c,unaff_EDI);
  puStack_48 = (undefined1 *)0x750315;
  FUN_00406e5c(&local_8);
  return;
}
