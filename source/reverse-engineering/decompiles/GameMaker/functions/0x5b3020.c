// rea decompile_all
// name: FUN_005b3020
// address: 0x5b3020
// body: available
// range: 0x5b3020-0x5b3076 inclusive
// range: 0x5b3095-0x5b3244 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b3042 (push 0x5b3245 followed by fs-segment stack chaining); handler 0x5b3245 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b305f (push 0x5b3077 followed by fs-segment stack chaining); handler 0x5b3077 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3020(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_2c [16];
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;

  puStack_3c = (undefined1 *)0x5b3037;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_40 = &LAB_005b3245;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x5b3051;
  puStack_3c = &stack0xfffffffc;
  local_10 = (int *)FUN_0054b240(&PTR_LAB_0053a600,1);
  puStack_4c = &LAB_005b3077;
  puStack_50 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_50;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x54))(local_10,local_8);
  puVar1 = puStack_48;
  *in_FS_OFFSET = puStack_50;
  puStack_48 = (undefined1 *)0x5b309d;
  FUN_005b32f4(local_c,puStack_50,puVar1);
  puStack_48 = (undefined1 *)0x5b30b5;
  FUN_0054b548(local_10,CONCAT22(0xffff,*(ushort *)(local_10 + 0xf) & 63999));
  puStack_48 = (undefined1 *)0x5b30bd;
  local_14 = (**(code **)(*local_10 + 0x30))();
  puStack_48 = (undefined1 *)0x5b30c8;
  local_18 = (undefined1 *)(**(code **)(*local_10 + 0x24))();
  puStack_48 = (undefined1 *)0x5b30d6;
  puStack_48 = (undefined1 *)FUN_005415b8(local_10[0xb]);
  *(undefined1 **)(local_c + 4) = puStack_48;
  puStack_4c = (undefined1 *)0x5b30f5;
  FUN_00409be0(local_c + 0x30,&DAT_005b2754,1);
  puStack_48 = (undefined1 *)0x5b3104;
  piVar3 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_48 = (undefined1 *)0x5b310f;
  FUN_00463dc0(piVar3,7);
  puStack_48 = (undefined1 *)0x5b3119;
  (**(code **)(*piVar3 + 0x44))(piVar3,local_14);
  puStack_48 = (undefined1 *)0x5b3123;
  (**(code **)(*piVar3 + 0x38))(piVar3,local_18);
  puStack_48 = (undefined1 *)0x5b312a;
  iVar4 = FUN_00462a64(piVar3);
  puStack_48 = (undefined1 *)0x5b3137;
  FUN_0045bc24(*(undefined4 *)(iVar4 + 0x48),0x8040);
  puStack_48 = (undefined1 *)0x5b313e;
  piVar5 = (int *)FUN_00462a64(piVar3);
  puStack_48 = (undefined1 *)0x5b3146;
  (**(code **)(*piVar5 + 0x10))(piVar5,local_2c);
  puStack_48 = local_2c;
  puStack_4c = (undefined1 *)0x5b3151;
  piVar5 = (int *)FUN_00462a64(piVar3);
  puVar1 = puStack_48;
  puStack_48 = (undefined1 *)0x5b3157;
  (**(code **)(*piVar5 + 0x4c))(piVar5,puVar1);
  if (-1 < *(int *)(local_c + 4) + -1) {
    iVar4 = 0;
    local_1c = *(int *)(local_c + 4);
    do {
      puStack_48 = (undefined1 *)0x5b3179;
      iVar6 = FUN_00548da8(local_10[0xb],iVar4);
      puStack_48 = (undefined1 *)(uint)*(byte *)(iVar6 + 0x34);
      puStack_4c = (undefined1 *)0x0;
      puStack_50 = local_18;
      FUN_00438c38(0,0,local_14,local_2c);
      puStack_50 = local_2c;
      uVar7 = FUN_00548da8(local_10[0xb],iVar4);
      uVar8 = FUN_00462a64(piVar3);
      puVar1 = puStack_50;
      puStack_50 = (undefined1 *)0x5b31b6;
      FUN_00546da8(uVar7,uVar8,puVar1);
      puStack_48 = (undefined1 *)0x5b31c4;
      uVar7 = FUN_00701d38(&DAT_00700d94,1,piVar3);
      *(undefined4 *)(*(int *)(local_c + 0x30) + iVar4 * 4) = uVar7;
      puStack_48 = (undefined1 *)0x5b31da;
      iVar6 = FUN_00548da8(local_10[0xb],iVar4);
      if (*(int *)(iVar6 + 0x38) == 0) {
LAB_005b31ec:
        puStack_48 = (undefined1 *)0x5b31f3;
        piVar5 = (int *)FUN_00462a64(piVar3);
        puStack_48 = (undefined1 *)0x5b31fb;
        (**(code **)(*piVar5 + 0x10))(piVar5,local_2c);
        puStack_48 = local_2c;
        puStack_4c = (undefined1 *)0x5b3206;
        piVar5 = (int *)FUN_00462a64(piVar3);
        puVar1 = puStack_48;
        puStack_48 = (undefined1 *)0x5b320c;
        (**(code **)(*piVar5 + 0x4c))(piVar5,puVar1);
      }
      else {
        puStack_48 = (undefined1 *)0x5b31e8;
        cVar2 = FUN_00547f34(*(int *)(iVar6 + 0x38));
        if (cVar2 != '\x01') goto LAB_005b31ec;
      }
      iVar4 = iVar4 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puStack_48 = (undefined1 *)0x5b321d;
  FUN_00405a7c(piVar3);
  puStack_48 = (undefined1 *)0x5b3225;
  FUN_00405a7c(local_10);
  puStack_48 = (undefined1 *)0x5b322d;
  FUN_005b2f20(local_c);
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_005b324c;
  puStack_40 = (undefined1 *)0x5b3244;
  thunk_FUN_00406e5c(&local_8,uStack_44,puVar1);
  return;
}
