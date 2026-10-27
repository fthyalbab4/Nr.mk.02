// rea decompile_all
// name: FUN_005e1704
// address: 0x5e1704
// body: available
// range: 0x5e1704-0x5e183a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e1726 (push 0x5e183b followed by fs-segment stack chaining); handler 0x5e183b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e1704(undefined4 param_1,undefined2 *param_2,char *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_EDX;
  undefined2 *puVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined2 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  puStack_2c = &LAB_005e183b;
  piStack_30 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_30;
  local_14 = param_2;
  FUN_005e109c(param_1,&local_8);
  *param_3 = local_8 == 0;
  if (*param_3 == '\0') {
    iVar7 = 8;
    uVar8 = true;
    puVar6 = local_14;
    do {
      FUN_00407f0c(&local_c,&DAT_005e1858);
      FUN_00408640(local_c,&DAT_005e1868);
      if ((bool)uVar8) {
        iVar2 = FUN_00408a68(local_c,local_8);
      }
      else {
        iVar2 = (*ram0x0077d7fc)(local_c,local_8);
      }
      if (iVar2 == 0) {
        FUN_00407f0c(&local_10,local_8);
        FUN_00407f0c(&local_8,0);
      }
      else {
        puVar10 = &local_10;
        iVar5 = iVar2 + -1;
        if (SBORROW4(iVar2,1)) {
          FUN_00405944();
          iVar5 = extraout_ECX;
        }
        uVar9 = 0x5e17bc;
        FUN_004086a8(local_8,1,iVar5,puVar10);
        piStack_30 = &local_8;
        FUN_00407058(&local_c);
        iVar3 = FUN_00408238();
        iVar5 = iVar3 + iVar2;
        if (SCARRY4(iVar3,iVar2)) {
          FUN_00405944(iVar3,iVar5);
          iVar5 = extraout_EDX;
        }
        FUN_004086a8(local_8,iVar5,0x7fffffff,uVar9);
      }
      FUN_0040839c(&local_18,&DAT_005e1878,local_10);
      uVar4 = FUN_005e2640(local_18,0);
      if (0xffff < uVar4) {
        uVar4 = thunk_FUN_00404478();
      }
      *puVar6 = (short)uVar4;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
      uVar8 = iVar7 == 0;
    } while (!(bool)uVar8);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)piStack_30;
  puStack_28 = &LAB_005e1842;
  puStack_2c = (undefined1 *)0x5e182d;
  thunk_FUN_00406e5c(&local_18,piStack_30,puVar1);
  puStack_2c = (undefined1 *)0x5e183a;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
