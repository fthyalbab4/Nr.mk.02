// rea decompile_all
// name: FUN_0063142c
// address: 0x63142c
// body: available
// range: 0x63142c-0x631693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x631452 (push 0x631694 followed by fs-segment stack chaining); handler 0x631694 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00631545) */
/* WARNING: Removing unreachable block (ram,0x00631560) */
/* WARNING: Removing unreachable block (ram,0x00631574) */
/* WARNING: Removing unreachable block (ram,0x00631580) */
/* WARNING: Removing unreachable block (ram,0x0063158d) */
/* WARNING: Removing unreachable block (ram,0x0063159c) */
/* WARNING: Removing unreachable block (ram,0x006315a8) */
/* WARNING: Removing unreachable block (ram,0x006315ac) */
/* WARNING: Removing unreachable block (ram,0x006315c2) */
/* WARNING: Removing unreachable block (ram,0x006315ce) */
/* WARNING: Removing unreachable block (ram,0x006315d9) */
/* WARNING: Removing unreachable block (ram,0x006315ef) */
/* WARNING: Removing unreachable block (ram,0x006315fb) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0063142c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_10 [3];

  puStack_3c = &stack0xfffffffc;
  local_10[2] = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_40 = &LAB_00631694;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  FUN_00438c38(0,0,0,param_4,0);
  if ((((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 4))) &&
     ((-1 < param_3 && (param_3 < *(int *)(param_1 + 8))))) {
    FUN_0070284c(param_1,param_2,param_3);
    FUN_00409be0(local_10,&DAT_006311ac,1,*(int *)(param_1 + 4) * *(int *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 4) * *(int *)(param_1 + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        *(undefined1 *)(local_10[0] + iVar3) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409be0(local_10 + 2,&DAT_00631184,1,10000);
    FUN_00409be0(local_10 + 1,&DAT_00631184,1,10000);
    FUN_006311d0(param_2,param_3);
    FUN_00409be0(local_10,&DAT_006311ac,1,0);
    FUN_00409be0(local_10 + 2,&DAT_00631184,1,0);
    FUN_00409be0(local_10 + 1,&DAT_00631184,1,0);
    FUN_00438c38(param_2,param_3,param_2 + 1,param_4,param_3 + 1);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0063169b;
  puStack_40 = (undefined1 *)0x631680;
  FUN_00409ce0(local_10,&DAT_006311ac,puVar1);
  puStack_40 = (undefined1 *)0x631693;
  FUN_00408e44(local_10 + 1,&DAT_00631184,2);
  return;
}
